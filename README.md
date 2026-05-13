# 🚀 Implement Magic Dictionary - LeetCode 676

## 📌 Problem Statement

Design a data structure that supports searching words by modifying **exactly one character**.

Implement the `MagicDictionary` class:

- `buildDict(dictionary)` → Builds a dictionary using a list of distinct words.
- `search(searchWord)` → Returns `true` if changing exactly one character in `searchWord` matches any word in the dictionary.

---

# 🧠 Logic / Approach

### Step 1
Sabhi dictionary words ko store kar lo.

### Step 2
Jab bhi koi `searchWord` aaye:
- Dictionary ke har word ke saath compare karo.
- Agar dono words ki length different ho, toh us word ko skip kar do.

### Step 3
Character by character compare karo:
- Jahan characters different milen, mismatch count increase karo.

### Step 4
Agar total mismatch count exactly `1` ho:
- Iska matlab sirf ek character change karke word match ho sakta hai.
- Return `true`.

### Step 5
Agar kisi bhi word ke saath exactly one mismatch nahi mila:
- Return `false`.

---

# 📌 Example

### Input

```text id="jsd6q4"
Dictionary = ["hello","leetcode"]

search("hhllo")
