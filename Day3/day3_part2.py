file_path = "Day3/day3_input.txt"

def line_to_twelve_digits(line):
    line_length = len(line)
    digits_needed = 12
    results = ""
    start_search_pos = 0

    while digits_needed > 0:
        remaining_positions  = line_length - start_search_pos
        search_window_end = start_search_pos + (remaining_positions - digits_needed + 1)

        search_window = line[start_search_pos:search_window_end]
        max_digit = max(search_window)

        max_digit_pos = line.index(max_digit, start_search_pos)
        results += max_digit

        # Update for next iteration
        start_search_pos = max_digit_pos + 1
        digits_needed -= 1

    return int(results)

def read_input_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    return [line.strip() for line in lines]

def main():
    lines = read_input_file(file_path)
    total_sum = 0

    for line in lines:
        total_sum += line_to_twelve_digits(str(line))
    print(total_sum)

if __name__ == "__main__":
    main()