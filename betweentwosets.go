package main

import (
    "fmt"
    "sort"
)

func main() {
    var howMany int
    // first array len
    var a int
    // second array len
    var b int
    fmt.Scanf("%d %d", &a, &b)


    s1 := make([]int, a)
    s2 := make([]int, b)

    for i, _ := range s1 {
        fmt.Scanf("%d", &s1[i])
    }

    for j, _ := range s2 {
        fmt.Scanf("%d", &s2[j])
    }
    
    howMany = HowManyIsThere(s1, s2)
    fmt.Print(howMany)

}

func HowManyIsThere(s1 []int, s2 []int) int{
    howMany := 0
    notBetween := 0
    n := MaxIntSlice(s1)
    mins2 := MinIntSlice(s2)
    for i := n ; i <= mins2 ; i++ {
        notBetween = 0
        if i > mins2 {
            notBetween++
        }

        for j :=0 ; j < len(s1) ; j++ {
            if( i%s1[j] != 0) {
                notBetween++
            }
        }

        for j := 0 ; j < len(s2) ; j++ {
            if( s2[j] % i != 0){
                notBetween++
            }
        }

        if(notBetween == 0) {
            howMany++
        }


    }

    return howMany
}


func MinIntSlice(v []int) int {
    sort.Ints(v)
    return v[0]
}

func MaxIntSlice(v []int) int {
    sort.Ints(v)
    return v[len(v)-1]
}
