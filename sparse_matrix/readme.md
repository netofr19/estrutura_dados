# Sparse Matrix

## 3-column representation

### Coordination list

```
| row | column | element |
--------------------------
|  1  |   8    |    3    |
|  2  |   3    |    8    |
|  2  |   6    |   10    |
|  4  |   1    |    4    |
|  6  |   3    |    2    |
|  7  |   4    |    6    |
|  8  |   2    |    9    |
|  8  |   5    |    5    |
--------------------------
```

### Compressed Sparse rows

```
A = [3,8,10, 4, 2, 6, 9, 5]
IA = [0, 1, 3, 3, 4, 4, 5, 6, 8]
JA = [8, 3, 6, 1, 3, 4, 2, 5]
```

## Addition of Sparse Matrices

