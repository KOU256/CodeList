package abc116

private fun readString() = readLine()!!
private fun readInt() = readLine()!!.toInt()
private fun readLong() = readLine()!!.toLong()
private fun readDouble() = readLine()!!.toDouble()
private fun readStringList() = readLine()!!.split(' ')
private fun readIntList() = readLine()!!.split(' ').map { it.toInt() }
private fun readLongList() = readLine()!!.split(' ').map { it.toLong() }
private fun readDoubleList() = readLine()!!.split(' ').map { it.toDouble() }

fun main() {
    var s = readInt()

    val a = mutableSetOf(s)
    while (true) {
        if (s % 2 == 0) {
            s /= 2
        }
        else {
            s = 3 * s + 1
        }

        if (a.contains(s)) {
            println(a.size + 1)
            break
        }
        else {
            a.add(s)
        }
    }
}