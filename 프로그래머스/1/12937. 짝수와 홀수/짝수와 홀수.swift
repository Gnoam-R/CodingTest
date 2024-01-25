func solution(_ num:Int) -> String {
    let isNumEven = (num % 2 == 0)
    let result = isNumEven ? "Even" : "Odd"
    return result
}