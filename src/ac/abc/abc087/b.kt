package abc087

fun main() {
    val a = readLine()!!.toInt()
    val b = readLine()!!.toInt()
    val c = readLine()!!.toInt()
    val x = readLine()!!.toInt()
    var count = 0

    for (i in 0..a) {
        for (j in 0..b) {
            for (k in 0..c) {
                if (i * 500 + j * 100 + k * 50 == x) {
                    count++
                }
            }
        }
    }

    println(count)
}