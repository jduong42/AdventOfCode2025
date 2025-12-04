## Day3

### What was good:

#### Part 1:

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

#### Part 2:

    - Had an idea about iterating max value until 12 values have been found.
    - Logic was refined with Claude Sonnet 4.5 (have a seperate md file for the prompts and responses.)
    - I was able to figure out Python syntax mainly by myself, which was pretty great.

### What was not so great:

    Everything went semi smoothly, so no bad moments.

## This is what Claude Sonnet 4.5 summary of they Day 3:

## Struggled With ❌

### Part 1:

1. **Didn't test edge cases before coding**

   - Never thought about `919` (two 9s) → should give `99`
   - Never thought about `819` (max at end) → needs reverse search
   - Claude had to challenge me with these cases

2. **Logic errors I didn't catch:**

   - Put duplicate check AFTER searching left/right (wrong order)
   - Forgot `return` after finding duplicates, causing code to continue executing
   - Accumulated sum inside `line_to_pairs()` instead of in `main()`
   - **Time spent debugging with AI help**: ~45 minutes

3. **Didn't debug independently first**
   - Should have added print statements to see what was happening
   - Asked "what's wrong?" instead of investigating myself

### Part 2:

1. **Couldn't derive the algorithm myself**

   - Had vague idea: "iterate max until 12 found"
   - Couldn't figure out the search window concept
   - **Claude explained the entire greedy algorithm:**
     - Search window = `[start : start + (remaining - needed + 1)]`
     - Pick max from window
     - Update start position to after picked digit
   - I understood it after explanation but didn't design it

2. **No algorithm analysis**

   - Didn't think about time complexity
   - Didn't consider: "What if brute force is too slow?"
   - Didn't realize this was a greedy algorithm pattern

3. **Still syntax issues**
   - Missing indentation causing wrong control flow
   - Not understanding when to return vs continue

## Key Lessons Learned 📚

1. **Test edge cases BEFORE implementing**

   - Write down 3-5 test cases including edge cases
   - Trace through algorithm by hand first
   - THEN code

2. **Debug independently first**

   - Add print statements at every step
   - Spend 15-20 min investigating before asking for help
   - Build debugging muscle memory

3. **Learn algorithm patterns**

   - Part 2 is a classic **greedy algorithm**
   - Need to study common patterns (greedy, sliding window, two pointers)
   - "Grokking Algorithms" book added to reading list

4. **Be honest in self-reflection**
   - Originally wrote "everything went smoothly"
   - Reality: Had multiple logic bugs, needed AI guidance on Part 2 algorithm
   - Honest documentation helps future learning

## Time Breakdown ⏱️

- Understanding Part 1: ~10 min
- Implementing Part 1: ~1 hour (including debugging help)
- Understanding Part 2: ~20 min (with explanation)
- Implementing Part 2: ~40 min
- **Total**: ~2 hours 10 min

## Improvements for Day 4 🎯

### Before coding:

- Write pseudocode/algorithm steps in comments first
- Trace through 3 examples by hand on paper
- List edge cases and expected outputs

### While coding:

- Add debug prints at major steps
- Test with smallest possible example first
- If stuck, debug alone for 15-20 min before asking AI

### After solving:

- Document actual struggles, not idealized version
- Time each phase: understand → implement → debug
- Ask: "Could I explain this algorithm to someone else?"

## Honest Self-Assessment

**Grade: B-**

**What improved from Day 2:**

- ✅ Much better incremental testing
- ✅ Cleaner code organization
- ✅ Caught some of my own errors

**Still needs work:**

- ❌ Algorithm design still requires heavy AI guidance
- ❌ Not testing edge cases independently
- ❌ Not debugging thoroughly before asking for help
- ❌ Need to be more honest about struggles

**Reality check:** Part 2's algorithm was entirely explained by AI. I understood it, but didn't derive it. This is using AI as a crutch, not a learning tool.

**Goal for Day 4:** Solve Part 1 completely alone. No AI until stuck for 30+ minutes. Document the actual struggle.
