#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int read_file_into_buffer(const char *filename, char **buffer) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening the file.");
        return 0;
    }

    fseek(file, 0, SEEK_END);
    int file_size = ftell(file);
    rewind(file);

    *buffer = malloc((file_size + 1) * sizeof(char));
    if (*buffer == NULL) {
        perror("Memory allocation failed.");
        fclose(file);
        return 0;
    }

    fread(*buffer, sizeof(char), file_size, file);
    (*buffer)[file_size] = '\0';
    fclose(file);

    return file_size;
}

long long check_invalid_id(char *id_str) {
    char *saveptr2;  // Save pointer for inner tokenization
    char *str_token1 = strtok_r(id_str, "-", &saveptr2);
    char *str_token2 = strtok_r(NULL, "-", &saveptr2);
    long long id_start = atoll(str_token1);
    long long id_end = atoll(str_token2);
    long long sum = 0;

    for (long long current_id = id_start; current_id <= id_end; current_id++) {
        char id[50];
        sprintf(id, "%lld", current_id);
        int id_length = strlen(id);

        if (id_length % 2 != 0)
            continue;
        if (id_length % 2 == 0) {
            int half_length = id_length / 2;
            char first_half[25];
            char second_half[25];

            strncpy(first_half, id, half_length);
            first_half[half_length] = '\0';
            strncpy(second_half, id + half_length, half_length);
            second_half[half_length] = '\0';

            if (strcmp(first_half, second_half) == 0) {
                sum += current_id;
            }
        }
    }
    return sum;
}

long long split_buffer_to_ids(char *buffer) {
    long long sum_of_invalid_ids = 0;
    char *saveptr1;  // Save pointer for outer tokenization
    char *token = strtok_r(buffer, ",", &saveptr1);
    
    while (token != NULL) {
        char token_copy[100];
        strcpy(token_copy, token);
        printf("Processing range: %s\n", token_copy);
        long long result = check_invalid_id(token_copy);
        printf("  Sum for this range: %lld\n", result);
        sum_of_invalid_ids += result;
        token = strtok_r(NULL, ",", &saveptr1);
    }
    return sum_of_invalid_ids;
}

int main() {
    char *buffer = NULL;

    int file_size = read_file_into_buffer("day2_input.txt", &buffer);
    if (file_size == 0) {
        printf("Failed to read file into buffer.\n");
        return 1;
    }

    long long sum = split_buffer_to_ids(buffer);
    printf("Sum of invalid IDs: %lld\n", sum);

    free(buffer);
    return 0;
}
 