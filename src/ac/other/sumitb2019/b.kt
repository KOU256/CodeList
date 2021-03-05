package sumitb2019

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

    for (i in 1..n) {
        val x = (i * 1.08).toInt()
        if ((x * 1.08).toInt() > n) {
            println(":(")
            break
        }
        if ((x * 1.08).toInt() == n) {
            println(x)
            break
        }
    }
}