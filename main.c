<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>main.c</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta name="generator" content="SynEdit HTML exporter" />
<style type="text/css">
<!--
body { color: #000000; background-color: #FFFFFF; }
.cpp1-assembler { color: #0000FF; }
.cpp1-character { color: #000000; }
.cpp1-comment { color: #3399FF; font-style: italic; }
.cpp1-float { color: #800080; }
.cpp1-hexadecimal { color: #800080; }
.cpp1-identifier { color: #000000; }
.cpp1-illegalchar { color: #000000; }
.cpp1-number { color: #800080; }
.cpp1-octal { color: #800080; }
.cpp1-preprocessor { color: #008000; }
.cpp1-reservedword { color: #000000; font-weight: bold; }
.cpp1-space { background-color: #FFFFFF; color: #000000; }
.cpp1-string { color: #FF0000; }
.cpp1-symbol { color: #000000; }
-->
</style>
</head>
<body>
<pre>
<code><span style="font: 10pt Courier New;"><span class="cpp1-symbol">&lt;?xml version=</span><span class="cpp1-string">&quot;1.0&quot;</span><span class="cpp1-space"> encoding=</span><span class="cpp1-string">&quot;iso-8859-1&quot;</span><span class="cpp1-symbol">?&gt;
&lt;!DOCTYPE html PUBLIC </span><span class="cpp1-string">&quot;-//W3C//DTD XHTML 1.0 Strict//EN&quot;</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd&quot;</span><span class="cpp1-symbol">&gt;
&lt;html xmlns=</span><span class="cpp1-string">&quot;http://www.w3.org/1999/xhtml&quot;</span><span class="cpp1-symbol">&gt;
&lt;head&gt;
&lt;title&gt;main.c&lt;/title&gt;
&lt;meta http-equiv=</span><span class="cpp1-string">&quot;Content-Type&quot;</span><span class="cpp1-space"> content=</span><span class="cpp1-string">&quot;text/html; charset=iso-8859-1&quot;</span><span class="cpp1-space"> /&gt;
&lt;meta name=</span><span class="cpp1-string">&quot;generator&quot;</span><span class="cpp1-space"> content=</span><span class="cpp1-string">&quot;SynEdit HTML exporter&quot;</span><span class="cpp1-space"> /&gt;
&lt;style type=</span><span class="cpp1-string">&quot;text/css&quot;</span><span class="cpp1-symbol">&gt;
&lt;!--
body { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; background-color: #FFFFFF; }
.cpp1-assembler { color: #0000FF; }
.cpp1-character { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; }
.cpp1-comment { color: #3399FF; font-style: italic; }
.cpp1-</span><span class="cpp1-reservedword">float</span><span class="cpp1-space"> { color: #</span><span class="cpp1-number">800080</span><span class="cpp1-symbol">; }
.cpp1-hexadecimal { color: #</span><span class="cpp1-number">800080</span><span class="cpp1-symbol">; }
.cpp1-identifier { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; }
.cpp1-illegalchar { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; }
.cpp1-number { color: #</span><span class="cpp1-number">800080</span><span class="cpp1-symbol">; }
.cpp1-octal { color: #</span><span class="cpp1-number">800080</span><span class="cpp1-symbol">; }
.cpp1-preprocessor { color: #008000; }
.cpp1-reservedword { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; font-weight: bold; }
.cpp1-space { background-color: #FFFFFF; color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; }
.cpp1-string { color: #FF0000; }
.cpp1-symbol { color: #</span><span class="cpp1-octal">000000</span><span class="cpp1-symbol">; }
--&gt;
&lt;/style&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;pre&gt;
&lt;code&gt;&lt;span style=</span><span class="cpp1-string">&quot;font: 10pt Courier New;&quot;</span><span class="cpp1-symbol">&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-preprocessor&quot;</span><span class="cpp1-symbol">&gt;#include &amp;lt;stdio.h&amp;gt;
</span><span class="cpp1-preprocessor">#include &amp;lt;stdlib.h&amp;gt;

</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-reservedword&quot;</span><span class="cpp1-symbol">&gt;</span><span class="cpp1-reservedword">int</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-space&quot;</span><span class="cpp1-symbol">&gt; main(&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-reservedword&quot;</span><span class="cpp1-symbol">&gt;</span><span class="cpp1-reservedword">int</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-space&quot;</span><span class="cpp1-symbol">&gt; argc, &lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-reservedword&quot;</span><span class="cpp1-symbol">&gt;</span><span class="cpp1-reservedword">char</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-space&quot;</span><span class="cpp1-symbol">&gt; *argv[])
{
  printf(&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-string&quot;</span><span class="cpp1-symbol">&gt;&amp;quot;Hello, you are learning C!!\n&amp;quot;&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-symbol&quot;</span><span class="cpp1-symbol">&gt;);
  system(&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-string&quot;</span><span class="cpp1-symbol">&gt;&amp;quot;PAUSE&amp;quot;&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-symbol&quot;</span><span class="cpp1-symbol">&gt;);	
  &lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-reservedword&quot;</span><span class="cpp1-symbol">&gt;</span><span class="cpp1-reservedword">return</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-space&quot;</span><span class="cpp1-symbol">&gt; &lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-number&quot;</span><span class="cpp1-symbol">&gt;</span><span class="cpp1-number">0</span><span class="cpp1-symbol">&lt;/span&gt;&lt;span </span><span class="cpp1-reservedword">class</span><span class="cpp1-symbol">=</span><span class="cpp1-string">&quot;cpp1-symbol&quot;</span><span class="cpp1-symbol">&gt;;
}

&lt;/span&gt;&lt;/span&gt;
&lt;/code&gt;&lt;/pre&gt;
&lt;/body&gt;
&lt;/html&gt;
</span></span>
</code></pre>
</body>
</html>