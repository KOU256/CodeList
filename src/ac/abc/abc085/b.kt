package abc085

fun main() {
    val n = readLine()!!.toInt()
    val d = List(n) { readLine()!!.toInt() }

    println(d.distinct().count())
}