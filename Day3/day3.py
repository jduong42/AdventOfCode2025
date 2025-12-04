file_path = "Day3/day3_input.txt"

def line_to_pairs(line):
    highest_value = max(line)

    if line.count(highest_value) >= 2:
        return int(f'{highest_value}{highest_value}')
    
    highest_value_pos = line.index(highest_value)

    if highest_value_pos == len(line) - 1:
        second_highest_value = max(line[:highest_value_pos])
        return int(f'{second_highest_value}{highest_value}')
    else:
        second_highest_value = max(line[highest_value_pos + 1:])
        return int(f'{highest_value}{second_highest_value}')

def read_input_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    return [line.strip() for line in lines]

def main():
    lines = read_input_file(file_path)
    total_sum = 0

    for line in lines:
        total_sum += line_to_pairs(str(line))
    print(total_sum)

if __name__ == "__main__":
    main()