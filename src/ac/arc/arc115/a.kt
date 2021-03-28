package arc115

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val (n, m) = readIntList()

    var even = 0L
    var odd = 0L
    for (i in 0 until n) {
        val s = readString()
        if (s.count { it == '1' } % 2 == 0) {
            even++
        }
        else {
            odd++
        }
    }

    println(even * odd)
}