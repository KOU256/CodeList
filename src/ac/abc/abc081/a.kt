package abc081

fun main() {
    val s = readLine()!!
    val c = s.chunked(1).filter { it == "1" }

    println(c.size)
}