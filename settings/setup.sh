# Setup for Zsh and Vimrc
# Asheigh Moodley
cp zshrc ~/.zshrc
cp vimrc ~/.vimrc
source ~/.zshrc
mkdir -p ~/.vim/colors
cp ./atom-dark-256.vim ~/.vim/colors
FileCheckerInstall
PlugInstall
FontInstall
BrewInstall
