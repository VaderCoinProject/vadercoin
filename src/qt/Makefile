.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. vadercoin_qt test_vadercoin_qt
clean: FORCE
	$(MAKE) -C .. vadercoin_qt_clean test_vadercoin_qt_clean
check: FORCE
	$(MAKE) -C .. test_vadercoin_qt_check
vadercoin-qt vadercoin-qt.exe: FORCE
	 $(MAKE) -C .. vadercoin_qt
apk: FORCE
	$(MAKE) -C .. vadercoin_qt_apk
