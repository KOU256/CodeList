package abc192

fun main() {
    val x = readLine()!!.toInt()

    println("%d".format(100 - (x % 100)))
}