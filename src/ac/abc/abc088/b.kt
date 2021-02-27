package abc088

fun main() {
    readLine()!!
    val a = readLine()!!.split(' ').map { it.toInt() }.sortedDescending()
    var score = 0

    for (i in a.indices) {
        if (i % 2 == 0) {
            score += a[i]
        }
        else {
            score -= a[i]
        }
    }

    println(score)
}