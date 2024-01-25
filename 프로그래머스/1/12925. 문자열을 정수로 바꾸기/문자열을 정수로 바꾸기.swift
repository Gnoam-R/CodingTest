func solution(_ s:String) -> Int {
    var input = s
    var result = 0
    if input.first == "-" {
        result = Int(s)!
    }
    // else if input.first == "+" {
    //     input.removeFirst()
    //     result = Int(s)!
    // }
    else {
        result = Int(s)!
    }
    return result
}