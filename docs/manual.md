<h1 align="center"><i>Echo++ Manual</i></h1>

<p align="center">
    <i>
echo++ is an extended version of the "echo" command that allows users to modify their strings with flags that change the color, case and much more of the string.
    </i>
</p>

<h2>Command Syntax:</h2>

```bash
echo++ --flag [string]
```
<h2>Flags Available:</h2>

<ul>
    <li>--upper</li>
    <li>--lower</li>
    <li>--reverse</li>
    <li>--red</li>
    <li>--green</li>
    <li>--yellow</li>
    <li>--len</li>
</ul>

<h2>--help Command:</h2>

<p align="center">
    <i>
The <strong>--help</strong> command displays a help usage output on the user terminal to record him the commands available and how the syntax works.
    </i>
</p>

```bash
echo++ --help
```

<h2>--version Command:</h2>

<p align="center">
    <i>
The <strong>--version</strong> command displays the installed version of <strong>echo++</strong> on the user terminal.
    </i>
</p>

```bash
echo++ --version
```

<h3>
    <ul>
        <li>--upper</li>
    </ul>
</h3>

<p>
    <i>The <strong>--upper</strong> flag turns the string case from lower to upper. If the string is aleary on upper case, a warning message will be displayed saying that the string is already on upper case.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>

```bash
echo++ --upper [string]
```
<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --upper "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

```bash
LOREM IPSUM
```

<h3>
    <ul>
        <li>--lower</li>
    </ul>
</h3>

<p>
    <i>The <strong>--lower</strong> flag turns the string case from upper to lower. If the string is aleary on lower case, a warning message will be displayed saying that the string is already on lower case.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --lower [string]
```
<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --lower "LOREM IPSUM"
```

<ul>
    <li>Output:</li>
</ul>

```bash
lorem ipsum
```

<h3>
    <ul>
        <li>--reverse</li>
    </ul>
</h3>

<p>
    <i>The <strong>--reverse</strong> flag takes the string and reverse its chars into a reversed order.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --reverse [string]
```

<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --reverse "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

```bash
muspi merol
```

<h3>
    <ul>
        <li>--red</li>
    </ul>
</h3>

<p>
    <i>The <strong>--red</strong> flag turns the color of the string into red.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --red [string]
```

<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --red "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

<pre><code class="language-bash" style="color: red">
🔴 lorem ipsum
</code></pre>


<h3>
    <ul>
        <li>--green</li>
    </ul>
</h3>

<p>
    <i>The <strong>--green</strong> flag turns the color of the string into green.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --green [string]
```

<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --green "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

<pre><code class="language-bash" style="color: green">
🟢 lorem ipsum
</code></pre>

<h3>
    <ul>
        <li>--yellow</li>
    </ul>
</h3>

<p>
    <i>The <strong>--yellow</strong> flag turns the color of the string into yellow.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --yellow [string]
```

<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --yellow "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

<pre><code class="language-bash" style="color: yellow">
🟡 lorem ipsum
</code></pre>

<h3>
    <ul>
        <li>--len</li>
    </ul>
</h3>

<p>
    <i>The <strong>--len</strong> counts how many chars the string contains and displays on the screen.</i>
</p>

<ul>
    <li>Syntax:</li>
</ul>


```bash
echo++ --len [string]
```

<ul>
    <li>Example:</li>
</ul>

```bash
echo++ --len "lorem ipsum"
```

<ul>
    <li>Output:</li>
</ul>

<pre><code class="language-bash">
11
</code></pre>