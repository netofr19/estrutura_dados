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

## Array representation

```
    [0 0 7 0 0]
A = [2 0 0 5 0]
    [9 0 0 0 0]
    [0 0 0 0 4]

A = i->| 4 | 1 | 2 | 2 | 3 | 4 |
    j->| 5 | 3 | 1 | 4 | 1 | 5 |
    x->| 5 | 7 | 2 | 5 | 9 | 4 |
```

```cpp

struct Element{
    int i;
    int j;
    int x;
};

struct Sparse{
    int m;
    int n;
    int num;
    struct Element *e;
};

void create(struct Sparse *s){
    printf("Enter dimensions: ");
    scanf("%d%d", &s->m, &s->n);

    printf("Enter the number of non-zero: ");
    scanf("%d", &s->num);

    s->e = new Elements[s->num];
    printf("Enter all elements: ");
    for (int i=0; i<s->num; i++){
        scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
    }
}

int main(){
    struct Sparse s;
    create(&s);
}
```

## Adding Sparse Matrix

```cpp
void add(struct Sparse *s1, struct Sparse *s2){

    struct Sparse *sum;
    int i,j, k=0;

    if(s1->m != s2->m || s1->n != s2->n){
        return 0;
    }

    sum = new struct Sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = new struct Elements[s1->num + s2->num]

    while (i<s1->num && j <s2->num){
        if(s1->e[i].i < s2->e[j].i){
        sum->e[k++] = s1->e[i++];
        } else if (s1->e[i].i > s2->e[j].i){
        sum->e[k++] = s2->e[j++];
        } else {
            if (s1->e[i].j < s2->e[j].j){
            sum->e[k++] = s1->e[i++];
            } else if (s1->e[i].j > s2->e[j].j){
            sum->e[k++] = s2->e[j++];
            } else {
            sum->e[k] = s1->e[i++];
            sum->e[k++].x = s2->e[j++].x;
            }
        }
    }
    


}
```

## Polynomial Representation


```
p(x) = 3x⁵ + 2x⁴ + 5x² + 2x + 7
```

```cpp
struct Term{
    int coef;
    int exp;
}

struct Poly{
    int n;
    struct Term *t;
}

int main(){

    struct Poly p;
    
    printf("Number of non-zero terms: ");
    scanf("%d", &p.n);

    p.t = New Term[p.n];

    printf("Enter polynomial terms: ");
    for(int i=0; i<p.n; i++){
        printf("term n %d: ", i+1);
        scanf("%d%d", &p.t[i].coef, &p.t[i].exp);
    }

    //Evaluation the polynomial
    int x = 5, sum = 0;
    for (int i=0; i<p.n; i++){
        sum += p.t[i].coef * math.pow(x, p.t[i].exp);
    }

    printf("Evaluation to %d = %d", x, sum);

    return 0;
}
```
