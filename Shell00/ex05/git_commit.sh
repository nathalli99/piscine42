#!/bin/bash
git log | grep commit | sed 's/commit //g' | head -n 5
