package abc086

fun main() {
    val n = readLine()!!.toInt()
    val txy = List(n + 1) {IntArray(3) { 0 } }
    repeat(n) {
        val (t, x, y) = readLine()!!.split(' ').map { it.toInt() }
        txy[it][0] = t
        txy[it][1] = x
        txy[it][2] = y
    }

    val sorted_txy = txy.sortedBy { it[0] }
    for (i in 0 until n) {
        val time = sorted_txy[i + 1][0] - sorted_txy[i][0]
        val distance = kotlin.math.abs((sorted_txy[i + 1][1] + sorted_txy[i + 1][2]) - (sorted_txy[i][1] + sorted_txy[i][2]))

        if (distance > time || distance % 2 != time % 2) {
            println("No")
            return
        }
    }

    println("Yes")
}