package abc192

fun main() {
    val (n, k) = readLine()!!.split(' ').map { it.toInt() }

    val a = IntArray(k + 1) {0}
    a[0] = n
    for (i in 1..k) {
        val s = a[i - 1].toString().chunked(1)
        val g1 = s.sortedDescending().joinToString(separator = "").toInt()
        val g2 = s.sorted().joinToString(separator = "").toInt()
        a[i] = g1 - g2
    }

    println("%d".format(a[k]))
}