package abc081

fun main() {
    readLine()!!
    val a = readLine()!!.split(' ').map { it.toInt() }

    var ans = Int.MAX_VALUE
    for (i in a.indices) {
        var count = 0
        var n = a[i]
        while (n % 2 == 0) {
            n /= 2
            count++
        }
        kotlin.math.min(ans, count).also { ans = it }
    }

    println(ans)
}