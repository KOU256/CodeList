package abc122

import java.lang.Integer.max

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val s = readString()

    var len = 0
    val reg = Regex(pattern = "[ACGT]+")
    for (i in 0 until s.length) {
        for (j in i until s.length) {
            val ss = s.slice(i..j)
            if (reg.matches(ss)) {
                len = max(len, ss.length)
            }
            else {
                break
            }
        }
    }

    println(len)
}