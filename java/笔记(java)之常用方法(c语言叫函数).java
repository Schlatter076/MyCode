----java.lang.string 1.0----

• char charAt (int index)
  返回给定位置的代码单元。除非对底层的代码单元感兴趣， 否则不需要调用这个方法。

• int codePointAt(int Index) 5.0
  返回从给定位置开始的码点。

• int offsetByCodePoints(int startlndex, int cpCount) 5.0
  返回从 startlndex 代码点开始，位移 cpCount 后的码点索引。

• int compareTo(String other)
  按照字典顺序，如果字符串位于 other 之前，返回一个负数；
  如果字符串位于 other 之 后，返回一个正数；如果两个字符串相等，返回 0。

• IntStream codePoints() 8
  将这个字符串的码点作为一个流返回。调用 toArray将它们放在一个数组中。

• new String(int[] codePoints, int offset, int count) 5.0
  用数组中从 offset 开始的 count 个码点构造一个字符串。

• boolean equals(0bject other)
  如果字符串与 other 相等， 返回 true。

• boolean equalsIgnoreCase(String other)
  如果字符串与 other 相等 （忽略大小写)， 返回 tme。

• boolean startsWith(String prefix )
• boolean endsWith(String suffix )
  如果字符串以 suffix 开头或结尾， 则返回 true。

• int indexOf(String str)
• int indexOf(String str, int fromlndex)
• int indexOf(int cp)
• int indexOf(int cp, int fromlndex)
  返回与字符串 str 或代码点 cp 匹配的第一个子串的开始位置。
  这个位置从索引 0 或 fromlndex 开始计算。如果在原始串中不存在 str， 返回 -1。

• int 1astIndexOf(String str)
• Int 1astIndexOf(String str, int fromlndex)
• int lastindexOf(int cp)
• int 1astindexOf(int cp, int fromlndex)
  返回与字符串 str 或代码点 cp 匹配的最后一个子串的开始位置。
  这个位置从原始串尾 端或 fromlndex 开始计算。

• int 1ength( ) 返回字符串的长度。

• int codePointCount(int startlndex, int endlndex) 5.0
  返回 startlndex 和 endludex-l 之间的代码点数量。没有配成对的代用字符将计入代码点。

• String replace(CharSequence oldString,CharSequence newString)
  返回一个新字符串。这个字符串用 newString 代替原始字符串中所有的 oldString。
  可以用 String 或 StringBuilder 对象作为 CharSequence 参数。

• String substring(int beginlndex)
• String substring(int beginlndex, int endlndex)
  返回一个新字符串。这个字符串包含原始字符串中从 beginlndex 到串尾或 endlndex-l 的所有代码单元。

•String toLowerCase( )
 String toUpperCase( )
 返回一个新字符串。这个字符串将原始字符串中的大写字母改为小写，
 或者将原始字 符串中的所有小写字母改成了大写字母。

 •String trim( )
  返回一个新字符串。这个字符串将删除了原始字符串头部和尾部的空格。

 •String join(CharSequence delimiter, CharSequence... elements) 8
  返回一个新字符串， 用给定的定界符连接所有元素。

----java.lang.StringBuilder 5.0----

• StringBuilder()
  构造一个空的字符串构建器。

• int length()
  返回构建器或缓冲器中的代码单元数量。

• StringBui1der appencl(String str)
  追加一个字符串并返回 this。
• StringBui1der append(char c)
  追加一个代码单元并返回 this。

• StringBui1der appendCodePoint(int cp)
  追加一个代码点，并将其转换为一个或两个代码单元并返回 this。

• void setCharAt(int i,char c)
  将第 i 个代码单元设置为 c。

• StringBui1der insert(int offset,String str) 在 offset
  位置插入一个字符串并返回 this。

• StringBuilder insert(int offset,Char c)
  在 offset 位置插入一个代码单元并返回 this。

• StringBui1der delete(1nt startindex,int endlndex)
  删除偏移量从 startindex 到-endlndex-1 的代码单元并返回 this。

• String toString()
  返回一个与构建器或缓冲器内容相同的字符串

----java.util.Scanner5.0----

• Scanner (InputStream in)
  用给定的输人流创建一个 Scanner 对象。
• String nextLine( )
  读取输入的下一行内容。
• String next( )
  读取输入的下一个单词（以空格作为分隔符)。
• int nextlnt( )
• double nextDouble( )
  读取并转换下一个表示整数或浮点数的字符序列。
• boolean hasNext( )
  检测输人中是否还有其他单词。
• boolean hasNextInt( )
• boolean hasNextDouble( )
  检测是否还有表示整数或浮点数的下一个字符序列。
• Scanner(File f)
  构造一个从给定文件读取数据的 Scanner。
• Scanner(String data)
  构造一个从给定字符串读取数据的 Scanner。

----java.Iang.System 1.0----

• static Console console( ) 6
  如果有可能进行交互操作， 就通过控制台窗口为交互的用户返回一个 Console 对象，
  否则返回 null。对于任何一个通过控制台窗口启动的程序， 都可使用 Console对象。
  否则，其可用性将与所使用的系统有关

----java.io.Console 6----

• static char[] readPassword(String prompt, Object...args)
• static String readLine(String prompt, Object...args)
  显示字符串 prompt 并且读取用户输入，直到输入行结束。
  args 参数可以用来提供输人格式。

----java.io.PrintWriter 1.1----

• PrintWriter(String fileName)
  构造一个将数据写入文件的 PrintWriter。文件名由参数指定。

----ava.nio.file.Paths 7----

• static Path get(String pathname)
  根据给定的路径名构造一个 Path。

----API java.math.Biglnteger 1.1----
//第一种(整型)
• Biglnteger add(Biglnteger other)
• Biglnteger subtract(Biglnteger other)
• Biglnteger multipiy(Biginteger other)
• Biglnteger divide(Biglnteger other)
• Biglnteger mod(Biglnteger other)
  返冋这个大整数和另一个大整数 other•的和、差、 积、 商以及余数。
• int compareTo(Biglnteger other)
  如果这个大整数与另一个大整数 other 相等， 返回 0; 如果这个大整数小于另一个大整 数 other, 返回负数；
    否则， 返回正数。
• static Biglnteger valueOf(1ong x)
  返回值等于 x 的大整数。
//第二种(浮点型)
• BigDecimal add(BigDecimal other)
• BigDecimal subtract(BigDecimal other)
• BigDecimal multipiy(BigDecimal other)
• BigDecimal divide(BigDecimal other RoundingMode mode) 5.0
  返回这个大实数与另一个大实数 other 的和、 差、 积、 商。
    要想计算商， 必须给出舍 入方式 （rounding mode)。
      RoundingMode.HALF UP 是在学校中学习的四舍五入方式 (BP, 数值 0 到 4 舍去， 数值 5 到 9 进位） 。
	    它适用于常规的计算。有关其他的舍入方 式请参看 Apr文档。
• int compareTo(BigDecimal other)
  如果这个大实数与另一个大实数相等， 返回 0 ; 如果这个大实数小于另一个大实数， 返回负数； 否则，返回正数。
• static BigDecimal valueOf(1ong x)
• static BigDecimal valueOf(1ong x,int scale)
  返回值为 X 或 x / 10scale 的一个大实数。

----java,util.Arrays 1.2----

• static String toString(type[]a) 5.0
  返回包含 a 中数据元素的字符串,这些数据元素被放在括号内， 并用逗号分隔。
  参数： a 类型为 int、long、short、char、 byte、boolean、float 或 double 的数组。
• static type copyOf(type[]a, int length)6
• static type copyOfRange(type[]a, int start, int end)6
  返回与 a 类型相同的一个数组， 其长度为 length 或者 end-start， 数组元素为 a 的值。
  参数：a 类型为 int、 long、short、char、byte、boolean、float 或 double 的数组。
  start 起始下标（包含这个值）0
  end 终止下标（不包含这个值）。这个值可能大于 a.length。在这种情况 下，结果为 0 或 false。
  length 拷贝的数据元素长度c 如果 length 值大于 a.length， 结果为 0 或 false ;
    否则， 数组中只有前面 length 个数据元素的拷贝值。
• static void sort(type[ 2 a)
  采用优化的快速排序算法对数组进行排序。
  参数：a 类型为 int、long、short、char、byte、boolean、float 或 double 的数组。
• static int binarySearch(type[] a, type v)
• static int binarySearch(type[]a, int start, int end, type v) 6
  采用二分搜索算法查找值 v。如果查找成功， 则返回相应的下标值；
  否则， 返回一个 负数值 r。-r-1 是为保持 a 有序 v 应插入的位置。
  参数：a 类型为 int、 long、short、 char、 byte、boolean、float 或 double 的有 序数组。
  start   起始下标（包含这个值） 。
  end   终止下标（不包含这个值)。
  v   同 a 的数据元素类型相同的值。
• static void fi11(type[]a, type v)
  将数组的所有数据元素值设置为 V。
  参数：a 类型为 int、long、short、char、byte、boolean、float 或 double 的数组。
  v   与 a 数据元素类型相同的一个值。
• static boolean equals(type[]a, type[]b) 如果两个数组大小相同， 并且下标相同的元素都对应相等， 返回 true。
  参数：a、 b 类型为 int、long、short、char、byte、boolean、float 或 double 的两个数组。

----java.time.LocalDate 8----
• static LocalTime now( )
  构造一个表示当前日期的对象。
• static LocalTime of(int year, int month, int day)
  构造一个表示给定日期的对象。
• int getYear( )
• int getMonthValue( )
• int getDayOfMonth( )
  得到当前日期的年、 月和日。
• DayOfWeek getDayOfWeek
  得到当前日期是星期几， 作为 DayOfWeek 类的一个实例返回。
  调用 getValue 来得到 1 ~ 7 之间的一个数， 表示这是星期几， 1 表示星期一， 7 表示星期日。
• LocalDate plusDays(int n)
• LocalDate minusDays(int n)
  生成当前日期之后或之前 n 天的日期。
