package abc142

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
    val a = readIntList()

    val m = mutableListOf<Pair<Int, Int>>()
    a.forEachIndexed { index, i ->
        m.add(index + 1 to i)
    }
    m.sortBy { it.second }

    for (i in 0 until m.size) {
        if (i < m.size - 1) {
            print("${m[i].first} ")
        }
        else {
            println(m[i].first)
        }
    }
}