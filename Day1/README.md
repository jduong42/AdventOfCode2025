# Day 1

## What I think I did good:

I think I got the core logic right in both part. I knew that something had to do when it goes over 0 or 100 (use the % modulo operator).

I learnt how to use simple Golang operators/syntax pretty fast. I think Golang is quite nice and understandable language (maybe I ditch Python LOL.)

## What was hard:

I had struggle with the mathematical logic and mixed parts from Part 1 and Part 2, which confused me even more. For example, I tried to integrate the zero counting based on whether the final position was negative, rather than calculating it based on the distance traveled from the start.

I was not familiar with Golang syntax so time to time I ran into errors.

## This is what Gemini told I could improve on:

Code Structure: Separation of Concerns:

    Focus: Always define the start state (Pstart​) and the rotation distance (D) before doing anything else.

    Goal: In Part 2, you must clearly separate the Count Calculation (using Pstart​ and D) from the Position Update (calculating Pnew​). This prevents the mixing of logic that caused confusion.

Go Idioms: Modulo and Zero Logic:

    Goal: While your if d_pos < 0 { ... } logic is correct (C-style), practice using the more concise and robust Go idiom for circular subtraction: d_pos = (d_pos - distance%dialSize + dialSize) % dialSize. This single line handles all negative wrap-arounds.

Edge Case Thinking (The Main Bug):

    Goal: Before concluding the logic, explicitly ask: "What happens if Pstart​=0?" or "What happens if Pstart​=99?"

    The only bug that gave you the "too high" answer was failing to handle the Left rotation starting at Pstart​=0, which is the classic "edge case" that separates a correct solution from a nearly correct one. Focusing on these boundaries is key to future puzzle success.

## Overall:

Great learning experience, more fun than frustration, I used Gemini to explain the logic and asking me guiding questions rather than just barf the solution LOL.