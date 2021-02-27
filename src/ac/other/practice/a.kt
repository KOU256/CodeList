package practice

fun main() {
    val a = readLine()!!.toInt()
    val (b, c) = readLine()!!.split(' ').map(String::toInt)
    val s = readLine()!!

    println("%d %s".format(a + b + c, s))
}