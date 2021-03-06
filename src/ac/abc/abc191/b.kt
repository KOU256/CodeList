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
    val (n, x) = readIntList()
    val a = readIntList()

    a.forEachIndexed { index, i ->
        if (i != x) {
            print(i)
            if (index < a.size - 1) {
                print(' ')
            }
        }
    }
    print('\n')
}