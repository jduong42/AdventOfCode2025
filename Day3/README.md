## Day3

### What was good:

    - Tested that reading and printing to standard output works.
    - Tested with example input, that it can return highest value:

    987654321111111
    811111111111119
    234234234234278
    818181911112111

    returned:

    ('9', 0)
    ('9', 14)
    ('8', 14)
    ('9', 6)

    - I know that I have a syntax or code problem when implementing the function that finds the highest and second highest value
    and I was able to accurately prompt Claude Sonnet 4.5 to guide me.
    - Fixed the line_to_pairs function. It's working properly now and is able to give accurate results based on the test input.
    - Fixed checking if the highest_value happens twice. Had an implementation, but it was in wrong place and unecessarily complex.
    - Fixed logic problem that I was adding the sum of pairs inside the line_to_pairs(line) function, but I should instead add them in the main().
