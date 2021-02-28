package abc191

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val (h, w) = readIntList()
    val s = List(h) { readLine()!!.chunked(1) }

    var ans = 0
    for (i in 0 until h - 1) {
        for (j in 0 until w - 1) {
            var count = 0
            for (m in 0..1) {
                for (n in 0..1) {
                    if (s[i + m][j + n] == "#") {
                        count++
                    }
                }
            }
            if (count % 2 == 1) {
                ans++
            }
        }
    }

    println(ans)
}