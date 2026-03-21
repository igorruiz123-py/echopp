<h1 align="center">
    <i>
        <strong>echo++ Makefile manual</strong>
    </i>
</h1>

<p align="center">
    <i>
        Makefile is used on <strong>echo++</strong> to make easier and automatic the compilation, recompilation, removal, installation and uninstallation of the software
    </i>
</p>

<p align="center">
    <i>
        On this manual you will see the commands of <strong>make</strong>, its syntax and meaning of each command.
    </i>
</p>

<h2>
    <i>Commands available:</i>
</h2>

<p>
    <i>
        <strong>
            IMPORTANT: make sure to be on the same directory as the file "<strong>Makefile</strong>" to run the "<strong>make</strong>" commands
        </strong>
    </i>
</p>

<ul>
    <li>
        make compile
    </li>
    <li>
        make remove
    </li>
    <li>
        make install
    </li>
    <li>
        make uninstall
    </li>
</ul>

<hr>

<h3>
    <ul>
        <li>
            <i>
                make compile
            </i>
        </li>
    </ul>
</h3>

<p>
    <i>
        The command "<strong>make compile</strong>" compiles the source code files into the binary executable file "<strong>echo++</strong>"
    </i>
</p>

<p>
    <i>
        <strong>Syntax:</strong>
    </i>
</p>

<pre>
    <code class="language-bash">make compile</code>
</pre>

<hr>

<h3>
    <ul>
        <li>
            <i>
                make remove
            </i>
        </li>
    </ul>
</h3>

<p>
    <i>
        The command "<strong>make remove</strong>" removes the objects files "<strong>.o</strong>" located on <strong>obj/</strong> and the executable file "<strong>echo++</strong>" located on <strong>bin/</strong>
    </i>
</p>

<p>
    <i>
        <strong>Syntax:</strong>
    </i>
</p>

<pre>
    <code class="language-bash">make remove</code>
</pre>

<hr>

<h3>
    <ul>
        <li>
            <i>
                make install
            </i>
        </li>
    </ul>
</h3>

<p>
    <i>
        The command "<strong>make install</strong>" installs the executable file "<strong>echo++</strong>" into the path of the user system, normally located on "<strong>/usr/local/bin</strong>" on <strong>Linux Ubuntu</strong>. This allows the user to run the command on his terminal console at any directory from the system.
    </i>
</p>

<p>
    <i>
        <strong>Syntax:</strong>
    </i>
</p>

<pre>
    <code class="language-bash">make install</code>
</pre>

<hr>

<h3>
    <ul>
        <li>
            <i>
                make uninstall
            </i>
        </li>
    </ul>
</h3>

<p>
    <i>
        The command "<strong>make uninstall</strong>" uninstalls the executable file "<strong>echo++</strong>" from the user path
    </i>
</p>

<p>
    <i>
        <strong>Syntax:</strong>
    </i>
</p>

<pre>
    <code class="language-bash">make uninstall</code>
</pre>