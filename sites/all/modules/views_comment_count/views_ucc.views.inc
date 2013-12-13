<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en-US" lang="en-US">
<!-- git web interface version 1.7.3.GIT, (C) 2005-2006, Kay Sievers <kay.sievers@vrfy.org>, Christian Gierke -->
<!-- git core binaries version 1.8.2.1 -->
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
<meta name="generator" content="gitweb/1.7.3.GIT git/1.8.2.1"/>
<meta name="robots" content="index, nofollow"/>
<title>drupalcode.org Git - sandbox/xandeadx/2041395.git/blob - views_ucc.views.inc</title>
<base href="http://drupalcode.org" />
<link rel="stylesheet" type="text/css" href="/gitweb.css"/>
<link rel="stylesheet" type="text/css" href="/highlight.css"/>
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc.views.inc - RSS feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc.views.inc" type="application/rss+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc.views.inc - RSS feed (no merges)" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc.views.inc;opt=--no-merges" type="application/rss+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc.views.inc - Atom feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc.views.inc;opt=--no-merges" type="application/atom+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc.views.inc - Atom feed (no merges)" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc.views.inc;opt=--no-merges" type="application/atom+xml" />
<link rel="shortcut icon" href="/git-favicon.png" type="image/png" />
</head>
<body>
<div class="page_header">
<a title="git homepage" href="http://drupal.org/"><img src="/git-logo.png" width="72" height="27" alt="git" class="logo"/></a><a href="/">projects</a> / <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git">sandbox/xandeadx/2041395.git</a> / blob
</div>
<form method="get" action="http://drupalcode.org/sandbox/xandeadx/2041395.git" enctype="application/x-www-form-urlencoded">
<div class="search">
<input name="a" type="hidden" value="search" />
<input name="h" type="hidden" value="324eb37c8ebe5c5d4fe3e921597a1660bbf41f90" />
<select name="st" >
<option selected="selected" value="commit">commit</option>
<option value="grep">grep</option>
<option value="author">author</option>
<option value="committer">committer</option>
<option value="pickaxe">pickaxe</option>
</select><sup><a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/search_help">?</a></sup> search:
<input type="text" name="s"  />
<span title="Extended regular expression"><label><input type="checkbox" name="sr" value="1" />re</label></span></div>
</form>
<div class="page_nav">
<a href="http://drupalcode.org/sandbox/xandeadx/2041395.git">summary</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/shortlog">shortlog</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/log">log</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/commit/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">commit</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/commitdiff/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">commitdiff</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/tree/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">tree</a><br/>
<a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blame/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc">blame</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/history/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc">history</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob_plain/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc">raw</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/HEAD:/views_ucc.views.inc">HEAD</a><br/>
</div>
<div class="header">
<a class="title" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/commit/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">Initial commit.</a>
</div>
<div class="page_path"><a title="tree root" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/tree/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">[sandbox/xandeadx/2041395.git]</a> / <a title="views_ucc.views.inc" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob_plain/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc">views_ucc.views.inc</a><br/></div>
<div class="page_body">
<div class="pre"><a id="l1" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l1" class="linenr">   1</a> <span class="hl sym">&lt;</span>?php</div>
<div class="pre"><a id="l2" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l2" class="linenr">   2</a> </div>
<div class="pre"><a id="l3" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l3" class="linenr">   3</a> <span class="hl com">/**</span></div>
<div class="pre"><a id="l4" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l4" class="linenr">   4</a> <span class="hl com"> * Implements hook_views_data()</span></div>
<div class="pre"><a id="l5" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l5" class="linenr">   5</a> <span class="hl com"> */</span></div>
<div class="pre"><a id="l6" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l6" class="linenr">   6</a> <span class="hl kwa">function</span> <span class="hl kwd">views_ucc_views_data</span><span class="hl sym">() {</span></div>
<div class="pre"><a id="l7" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l7" class="linenr">   7</a>   <span class="hl kwa">return array</span><span class="hl sym">(</span></div>
<div class="pre"><a id="l8" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l8" class="linenr">   8</a>     <span class="hl str">'views'</span> <span class="hl sym">=&gt;</span> <span class="hl kwa">array</span><span class="hl sym">(</span></div>
<div class="pre"><a id="l9" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l9" class="linenr">   9</a>       <span class="hl str">'user_comment_count'</span> <span class="hl sym">=&gt;</span> <span class="hl kwa">array</span><span class="hl sym">(</span></div>
<div class="pre"><a id="l10" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l10" class="linenr">  10</a>         <span class="hl str">'title'</span> <span class="hl sym">=&gt;</span> <span class="hl kwd">t</span><span class="hl sym">(</span><span class="hl str">'Comment count'</span><span class="hl sym">),</span></div>
<div class="pre"><a id="l11" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l11" class="linenr">  11</a>         <span class="hl str">'help'</span> <span class="hl sym">=&gt;</span> <span class="hl kwd">t</span><span class="hl sym">(</span><span class="hl str">'Number of user comments'</span><span class="hl sym">),</span></div>
<div class="pre"><a id="l12" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l12" class="linenr">  12</a>         <span class="hl str">'group'</span> <span class="hl sym">=&gt;</span> <span class="hl kwd">t</span><span class="hl sym">(</span><span class="hl str">'User'</span><span class="hl sym">),</span></div>
<div class="pre"><a id="l13" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l13" class="linenr">  13</a>         <span class="hl str">'field'</span>  <span class="hl sym">=&gt;</span> <span class="hl kwa">array</span><span class="hl sym">(</span></div>
<div class="pre"><a id="l14" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l14" class="linenr">  14</a>           <span class="hl str">'handler'</span> <span class="hl sym">=&gt;</span> <span class="hl str">'views_ucc_views_handler_field_user_comment_count'</span><span class="hl sym">,</span></div>
<div class="pre"><a id="l15" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l15" class="linenr">  15</a>         <span class="hl sym">),</span></div>
<div class="pre"><a id="l16" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l16" class="linenr">  16</a>         <span class="hl str">'sort'</span> <span class="hl sym">=&gt;</span> <span class="hl kwa">array</span><span class="hl sym">(</span></div>
<div class="pre"><a id="l17" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l17" class="linenr">  17</a>           <span class="hl str">'handler'</span> <span class="hl sym">=&gt;</span> <span class="hl str">'views_ucc_views_handler_sort_user_comment_count'</span><span class="hl sym">,</span></div>
<div class="pre"><a id="l18" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l18" class="linenr">  18</a>         <span class="hl sym">),</span></div>
<div class="pre"><a id="l19" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l19" class="linenr">  19</a>       <span class="hl sym">),</span></div>
<div class="pre"><a id="l20" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l20" class="linenr">  20</a>     <span class="hl sym">),</span></div>
<div class="pre"><a id="l21" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l21" class="linenr">  21</a>   <span class="hl sym">);</span></div>
<div class="pre"><a id="l22" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc#l22" class="linenr">  22</a> <span class="hl sym">}</span></div>
</div><div class="page_footer">
<div class="cachetime">Cache Last Updated: Fri Dec 13 00:40:55 2013 GMT</div>
<!--
	Full URL: |/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc.views.inc?|
	URL Hash: |b3e7526826d5d9e68fc528cab2ef8a3d|
-->
<div class="page_footer_text">For more information about this repository, visit the project page at https://drupal.org/sandbox/xandeadx/2041395</div>
<a class="rss_logo" title="history of views_ucc.views.inc RSS feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc.views.inc">RSS</a>
<a class="rss_logo" title="history of views_ucc.views.inc Atom feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc.views.inc">Atom</a>
</div>
<script type="text/javascript" src="/gitweb.js"></script>
</body>
</html>