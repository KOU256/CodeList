package abc193

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val n = readInt()
    val apx = List(n) { IntArray(3) {0} }
    repeat(n) {
        val (a, p, x) = readIntList()
        apx[it][0] = a
        apx[it][1] = p
        apx[it][2] = x
    }

    var ans = Int.MAX_VALUE
    for (i in apx.indices) {
        if (apx[i][0] + 1 <= apx[i][2]) {
            ans = kotlin.math.min(ans, apx[i][1])
        }
    }

    if (ans == Int.MAX_VALUE) {
        println(-1)
    }
    else {
        println(ans)
    }
}