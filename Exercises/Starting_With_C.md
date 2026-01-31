# Let Us C — Yashavant Kanetkar  
## Exercise (Page No: 38)

---

## Operator Hierarchy

1. `* / %` First Priority
2. `+ -` Second Priority
3. `=` Third Priority

---

### Problem Statement

**[C] Evaluate the following expressions and show their hierarchy.**

---

##### (a) g = big / 2 + big * 4 / big - big + abc / 3 ;

- `abc = 2.5`
- `big = 2`
- Assume `g` is a **float**

Answer :
g = 2 / 2 + 8 / 2 - 2 + 2.5 / 3
g = 1 + 4 - 2 + 0.83
g = 3.83


##### (b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;

- `ink = 4`
- `act = 1`
- `tig = 3.2`
- Assume `on` is an **int**

Answer :
on = 4 * 1 / 2 + 3 / 2 * 1 + 2 + 3.2
on = 4 / 2 + 3 / 2 + 2 + 3.2
on = 2 + 1.5 + 2 + 3.2
on = 8


##### (c) s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;

- `qui = 4`
- `add = 2`
- `god = 2`
- Assume `s` is an **int**

Answer :
s = 4 * 2 / 4 - 6 / 2 + 2 / 3 * 6 / 2
s = 2 - 3 + 2
s = 1


##### (d) s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;

- `a = 4`
- `g = 3`
- Assume `s` is an **int**

Answer :
s = 1 / 3 * 4 / 4 - 6 / 2 + 2 / 3 * 6 / 3
s = -3 + 0
s = -3
