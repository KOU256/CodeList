package abc083

fun main() {
    val (n, a, b) = readLine()!!.split(' ').map { it.toInt() }

    var ans = 0
    for (i in 1..n) {
        var sum = 0
        i.toString().forEach {
            sum += it - '0'
        }
        if (sum in a..b) {
            ans += i
        }
    }

    println(ans)
}