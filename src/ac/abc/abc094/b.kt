package abc094

import java.lang.Integer.min

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val (n, m, x) = readIntList()
    val a = readIntList()

    var l = 0
    var r = 0
    a.forEach {
        if (it < x) {
            l++
        }
        else if (it > x) {
            r++
        }
    }

    println(min(l, r))
}