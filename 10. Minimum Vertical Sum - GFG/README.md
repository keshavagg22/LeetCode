# 10. Minimum Vertical Sum
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a vector of vectors <strong>V</strong>. Find the minimum vertical sum. Vectors inside the vector<strong> V </strong>may not be of the same size.<br>
The<strong> vertical sum is</strong> defined as described below:<br>
If we have a vector of vectors V:<br>
1&nbsp; 2 3 4<br>
5 6<br>
7 8 9<br>
The vertical sums are: Sum of {1 5 7}, Sum of {2 6 8}, Sum of {3 9}, Sum of {4}.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong> <strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
v1 -&gt; 2 3 5
v2 -&gt; 1 2
v3 -&gt; 1 4 5 1
<strong>Output: 
</strong>1
<strong>Explanation:</strong>
Here N&nbsp; = 3. So we have 3 vectors 
inside V. Now, the first vector is 
of size 3 and elements are {2 3 5}.
The second vector is of size 2 and
elements are {1 2}. The third vector
is of size 4 and elements are {1 4 5 1}.
2 3 5
1 2
1 4 5 1
So, the vertical sums are {2+1+1},
{3+2+4}, {5+5},{1}. 1 is the min vertical
sum here.</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You need to complete the function <strong>minimum_ vertical_sum()</strong> that takes vector of vectors as a parameter and returns min vertical sum.</span></p>
 <p></p>
            </div>