#include &lt;stdio.h&gt;
int main() {
int num;
printf(&quot;Enter an integer: &quot;);
scanf(&quot;%d&quot;, &amp;num);

if(num % 2 == 0)
printf(&quot;%d is even.&quot;, num);
else
printf(&quot;%d is odd.&quot;, num);
return 0;
}