
#to_msyspath = $(shell echo "$(1)" | sed -e 's,\\,\/,g;s,\([a-zA-Z]\):,/\1,')
#coredir:=$(call to_msyspath,$(CWD))

doc_module=MCAL
doc_type=dd
doc_mcu=mpc5xxx

SPHINXDIR=../../../scripts/sphinx

#build_mcal_doc can um mpc5xxx
#build_mcal_dd_doc MCAL dd

# Preprocessed header
#rstp-y=intro.rst

# Create symlinks for the following files.
#arch-sym-y = ug_arch.rst,arch/ug_$(doc_mcu).rst
#arch-sym-y += docref.rst,arch/docref_$(doc_mcu).rst

include  $(SPHINXDIR)/build_doc.mk






