package abc156

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
    val x = readIntList()

    var ans = Int.MAX_VALUE
    (x.min()!!..x.max()!!).forEach { p ->
        var sum = 0.0
        for (i in x) {
            sum += Math.pow((i - p).toDouble(), 2.0)
        }
        if (sum < ans) {
            ans = sum.toInt()
        }
    }

    println(ans)
}