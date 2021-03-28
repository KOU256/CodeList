package abc138

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    readInt()
    val v = readDoubleList().sortedDescending()

    var ans = 0.0
    v.forEachIndexed { index, i ->
        if (index == v.lastIndex) {
            ans += i / Math.pow(2.0, index.toDouble())
        }
        else {
            ans += i / Math.pow(2.0, (index + 1).toDouble())
        }
    }

    println(ans)
}