package codefestival_2016_qualB

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    val (n, a, b) = readIntList()
    val s = readString()

    val participants = MutableList(n) { false }
    var a_rank = 0
    var b_rank = 0
    s.forEachIndexed { index, c ->
        when (c) {
            'a' -> {
                if (a_rank + b_rank < a + b) {
                    participants[index] = true
                    a_rank++
                }
            }
            'b' -> {
                if (a_rank + b_rank < a + b && b_rank < b) {
                    participants[index] = true
                    b_rank++
                }
            }
            else -> {}
        }
    }

    participants.forEach {
        if (it) {
            println("Yes")
        }
        else {
            println("No")
        }
    }
}
