import Foundation

func solution(_ myString:String, _ pat:String) -> Int {
    // 1. 문자를 저장하고 이후 문자가 같으면 반환하는 방법
    // 2. AA, 문자열 BB를 찾아내는 방법
     // = myString
    var compareString = myString.replacingOccurrences(of: "A", with: "C")
    compareString = compareString.replacingOccurrences(of: "B", with: "A")
    compareString = compareString.replacingOccurrences(of: "C", with: "B")
    
    guard !compareString.contains(pat)
    else {
        return 1
    }
    return 0
}