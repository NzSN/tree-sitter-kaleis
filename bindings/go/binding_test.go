package tree_sitter_kaleis_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kaleis "github.com/tree-sitter/tree-sitter-kaleis/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kaleis.Language())
	if language == nil {
		t.Errorf("Error loading Kaleis grammar")
	}
}
