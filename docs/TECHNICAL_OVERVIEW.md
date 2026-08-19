# Technical Overview — My_push_swap

## Problem

`push_swap` asks for an ordered result under an intentionally restricted instruction set. The challenge is not just to sort numbers, but to produce a valid sequence of stack operations with reasonable efficiency.

## Data model

The project represents stack state using linked structures and operates over two stacks, conventionally `a` and `b`.

## Operation set

The algorithm can only mutate state through operations such as swap, push, rotate and reverse rotate. This forces the sorting strategy to reason in terms of legal transformations instead of calling a standard sorting function.

## Processing pipeline

```text
CLI input
   ↓
Parsing
   ↓
Validation / duplicate checks / integer bounds
   ↓
Stack construction
   ↓
Indexing / normalization
   ↓
Sorting strategy
   ↓
Operation stream
```

## Important engineering concerns

- reject malformed integers and overflow;
- reject duplicates;
- support common argument formats;
- keep stack links consistent after every operation;
- avoid leaks on validation failure;
- choose a strategy appropriate to input size;
- measure operation count, not only correctness.

## Validation strategy

A useful test harness should verify both correctness and operation count. Interesting cases include already-sorted input, reverse-sorted input, duplicates, INT_MIN/INT_MAX, random permutations and repeated randomized runs.

## Portfolio value

The project demonstrates data structures, input validation, constrained algorithm design and optimization against a measurable cost function.
