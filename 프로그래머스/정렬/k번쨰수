
# [level 1] k번째 수

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/42748) 

```swift

import Foundation

func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {
    
    let inputArray = array
    let commandArr =  commands
    var returnArray: [Int] = []

    commandArr.forEach { array in
        let firstNumber = array[0] - 1
        let secondNumber = array[1] - 1
        let thirdNumber = array[2] - 1

        let clampedArray = Array(inputArray[firstNumber...secondNumber])
        let arrangedArray = clampedArray.sorted()
                        
        returnArray.append(arrangedArray[thirdNumber])
    }
    return returnArray
}


```
