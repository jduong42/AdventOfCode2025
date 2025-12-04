# Day 2

## What was great:

Logic in this exercise was easier to understand compared to Day1. I had some previous experience with C, so I chose that language for this day's exercise.

## What was hard:

I had struggle with the C syntax due being so long since I used it. It came apparent when I was trying to write down the logic into code.

## This is what Claude Sonnet 4.5 summary of they Day 2.

## What Went Well ✅

### Problem Solving

- **Strong logical thinking**: Quickly grasped the repeating pattern concept and how to check all possible divisors
- **Good code organization**: Immediately recognized the value of separating file reading into its own function
- **Systematic debugging**: When getting wrong answer, correctly suggested testing with example input first
- **Asked clarifying questions**: Didn't make assumptions when confused (e.g., "why skip odd-length numbers?")

### Learning Approach

- Preferred guided questions over direct solutions, showing focus on understanding
- Memory management awareness from the start (asking about when to `free()`)

## What Was Challenging ❌

### C Fundamentals

- **Syntax errors**: Missing braces, wrong indentation causing control flow issues
- **Type mismatches**: Declared functions as `int` but used as `long long`, used `atoi()` instead of `atoll()` for large numbers
- **String handling confusion**: Single quotes `','` vs double quotes `","` for `strtok()`
- **Integer overflow**: Initially used `int` for numbers exceeding 2.1 billion

### Development Process

- **Didn't read compiler errors carefully**: Error messages clearly indicated issues but required guidance to fix
- **No incremental testing**: Wrote large chunks before testing, making debugging harder
- **Skipped documentation**: Asked basic questions about `strtok()` that man pages would answer
- **Nested `strtok()` issue**: Took time to understand state interference; needed `strtok_r()` with separate save pointers

### Translation Gap

- Strong at understanding logic conceptually
- Struggled putting that logic into correct C code (return statements in wrong places, scope issues)

## Key Lessons Learned 📚

1. **Always compile with warnings**: `gcc -Wall -Wextra -Werror`

   - Would have caught type mismatches, unused variables, and quote issues immediately

2. **Test incrementally**:

   - File reading alone ✅
   - Comma splitting alone (skipped ❌)
   - Hyphen splitting alone (skipped ❌)
   - Single number pattern check (skipped ❌)
   - Full solution (failed initially ❌)

3. **Read documentation first**: `man strtok` would have explained the static state issue upfront

4. **Match braces as you type**: Don't write entire blocks before closing them

5. **Use appropriate integer types**: Consider data range before choosing `int` vs `long long`

## Improvements for Next Time 🎯

### Priority 1: Fundamentals

- Read "The C Programming Language" (K&R) chapters 1-5
- Practice with compiler warnings enabled by default
- Learn to parse compiler error messages without help

### Priority 2: Process

- Write detailed pseudocode in comments before coding
- Compile after every 5-10 lines of code
- Create small test files with known outputs

### Priority 3: Tools

- Learn to use `gdb` debugger for stepping through code
- Add strategic debug prints immediately when something fails
- Understand pointer arithmetic and string operations deeply

## Overall:

Again great learning experience, definitely more fun than frustration. However, I noticed that instead of trying to figure everything my own, I relied on Claude Sonnet 4.5 to help me. I felt a bit impatient, like I want to have the result asap? (maybe a bit hard to explain).

AI Model used: Ask - Claude Sonnet 4.5
