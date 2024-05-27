func solution(_ n:Int) -> Int {
    var result = 0
    if n == 0 {
        return result
    }
    for aa in 1...n {
        if n % aa == 0 {
            result = result + aa
        }
    }
    return result
}