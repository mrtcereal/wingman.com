<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en-US" lang="en-US">
<!-- git web interface version 1.7.3.GIT, (C) 2005-2006, Kay Sievers <kay.sievers@vrfy.org>, Christian Gierke -->
<!-- git core binaries version 1.8.2.1 -->
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
<meta name="generator" content="gitweb/1.7.3.GIT git/1.8.2.1"/>
<meta name="robots" content="index, nofollow"/>
<title>drupalcode.org Git - sandbox/xandeadx/2041395.git/blob - views_ucc_views_handler_sort_user_comment_count.inc</title>
<base href="http://drupalcode.org" />
<link rel="stylesheet" type="text/css" href="/gitweb.css"/>
<link rel="stylesheet" type="text/css" href="/highlight.css"/>
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc_views_handler_sort_user_comment_count.inc - RSS feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc_views_handler_sort_user_comment_count.inc" type="application/rss+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc_views_handler_sort_user_comment_count.inc - RSS feed (no merges)" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc_views_handler_sort_user_comment_count.inc;opt=--no-merges" type="application/rss+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc_views_handler_sort_user_comment_count.inc - Atom feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc_views_handler_sort_user_comment_count.inc;opt=--no-merges" type="application/atom+xml" />
<link rel="alternate" title="sandbox/xandeadx/2041395.git - history of views_ucc_views_handler_sort_user_comment_count.inc - Atom feed (no merges)" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc_views_handler_sort_user_comment_count.inc;opt=--no-merges" type="application/atom+xml" />
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
<a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blame/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc">blame</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/history/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc">history</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob_plain/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc">raw</a> | <a href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/HEAD:/views_ucc_views_handler_sort_user_comment_count.inc">HEAD</a><br/>
</div>
<div class="header">
<a class="title" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/commit/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">Initial commit.</a>
</div>
<div class="page_path"><a title="tree root" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/tree/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90">[sandbox/xandeadx/2041395.git]</a> / <a title="views_ucc_views_handler_sort_user_comment_count.inc" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob_plain/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc">views_ucc_views_handler_sort_user_comment_count.inc</a><br/></div>
<div class="page_body">
<div class="pre"><a id="l1" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l1" class="linenr">   1</a> <span class="hl sym">&lt;</span>?php</div>
<div class="pre"><a id="l2" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l2" class="linenr">   2</a> </div>
<div class="pre"><a id="l3" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l3" class="linenr">   3</a> <span class="hl kwa">class</span> views_ucc_views_handler_sort_user_comment_count <span class="hl kwa">extends</span> views_handler_sort <span class="hl sym">{</span></div>
<div class="pre"><a id="l4" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l4" class="linenr">   4</a>   <span class="hl kwa">function</span> <span class="hl kwd">query</span><span class="hl sym">() {</span></div>
<div class="pre"><a id="l5" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l5" class="linenr">   5</a>     <span class="hl kwc">$this</span><span class="hl sym">-&gt;</span><span class="hl kwd">ensure_my_table</span><span class="hl sym">();</span></div>
<div class="pre"><a id="l6" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l6" class="linenr">   6</a>     <span class="hl kwc">$this</span><span class="hl sym">-&gt;</span>query<span class="hl sym">-&gt;</span><span class="hl kwd">add_orderby</span><span class="hl sym">(</span>NULL<span class="hl sym">,</span> NULL<span class="hl sym">,</span> <span class="hl kwc">$this</span><span class="hl sym">-&gt;</span>options<span class="hl sym">[</span><span class="hl str">'order'</span><span class="hl sym">],</span> <span class="hl str">'user_comment_count'</span><span class="hl sym">);</span></div>
<div class="pre"><a id="l7" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l7" class="linenr">   7</a>   <span class="hl sym">}</span></div>
<div class="pre"><a id="l8" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc#l8" class="linenr">   8</a> <span class="hl sym">}</span></div>
</div><div class="page_footer">
<div class="cachetime">Cache Last Updated: Fri Dec 13 00:41:03 2013 GMT</div>
<!--
	Full URL: |/sandbox/xandeadx/2041395.git/blob/324eb37c8ebe5c5d4fe3e921597a1660bbf41f90:/views_ucc_views_handler_sort_user_comment_count.inc?|
	URL Hash: |85e427b50f72cd24bd6aa351d9be54c4|
-->
<div class="page_footer_text">For more information about this repository, visit the project page at https://drupal.org/sandbox/xandeadx/2041395</div>
<a class="rss_logo" title="history of views_ucc_views_handler_sort_user_comment_count.inc RSS feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/rss?f=views_ucc_views_handler_sort_user_comment_count.inc">RSS</a>
<a class="rss_logo" title="history of views_ucc_views_handler_sort_user_comment_count.inc Atom feed" href="http://drupalcode.org/sandbox/xandeadx/2041395.git/atom?f=views_ucc_views_handler_sort_user_comment_count.inc">Atom</a>
</div>
<script type="text/javascript" src="/gitweb.js"></script>
</body>
</html>