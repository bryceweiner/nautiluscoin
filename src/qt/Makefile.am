include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = nautiluscoin-qt
noinst_LIBRARIES = libnautiluscoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# nautiluscoin qt core #
QT_TS = \
  locale/nautiluscoin_ach.ts \
  locale/nautiluscoin_af_ZA.ts \
  locale/nautiluscoin_ar.ts \
  locale/nautiluscoin_be_BY.ts \
  locale/nautiluscoin_bg.ts \
  locale/nautiluscoin_bs.ts \
  locale/nautiluscoin_ca_ES.ts \
  locale/nautiluscoin_ca.ts \
  locale/nautiluscoin_ca@valencia.ts \
  locale/nautiluscoin_cmn.ts \
  locale/nautiluscoin_cs.ts \
  locale/nautiluscoin_cy.ts \
  locale/nautiluscoin_da.ts \
  locale/nautiluscoin_de_AT.ts \
  locale/nautiluscoin_de.ts \
  locale/nautiluscoin_el_GR.ts \
  locale/nautiluscoin_en.ts \
  locale/nautiluscoin_eo.ts \
  locale/nautiluscoin_es_CL.ts \
  locale/nautiluscoin_es_DO.ts \
  locale/nautiluscoin_es_MX.ts \
  locale/nautiluscoin_es.ts \
  locale/nautiluscoin_es_UY.ts \
  locale/nautiluscoin_et.ts \
  locale/nautiluscoin_eu_ES.ts \
  locale/nautiluscoin_fa_IR.ts \
  locale/nautiluscoin_fa.ts \
  locale/nautiluscoin_fi.ts \
  locale/nautiluscoin_fr_CA.ts \
  locale/nautiluscoin_fr.ts \
  locale/nautiluscoin_gl.ts \
  locale/nautiluscoin_gu_IN.ts \
  locale/nautiluscoin_he.ts \
  locale/nautiluscoin_hi_IN.ts \
  locale/nautiluscoin_hr.ts \
  locale/nautiluscoin_hu.ts \
  locale/nautiluscoin_id_ID.ts \
  locale/nautiluscoin_it.ts \
  locale/nautiluscoin_ja.ts \
  locale/nautiluscoin_ka.ts \
  locale/nautiluscoin_kk_KZ.ts \
  locale/nautiluscoin_ko_KR.ts \
  locale/nautiluscoin_ky.ts \
  locale/nautiluscoin_la.ts \
  locale/nautiluscoin_lt.ts \
  locale/nautiluscoin_lv_LV.ts \
  locale/nautiluscoin_ms_MY.ts \
  locale/nautiluscoin_nb.ts \
  locale/nautiluscoin_nl.ts \
  locale/nautiluscoin_pam.ts \
  locale/nautiluscoin_pl.ts \
  locale/nautiluscoin_pt_BR.ts \
  locale/nautiluscoin_pt_PT.ts \
  locale/nautiluscoin_ro_RO.ts \
  locale/nautiluscoin_ru.ts \
  locale/nautiluscoin_sah.ts \
  locale/nautiluscoin_sk.ts \
  locale/nautiluscoin_sl_SI.ts \
  locale/nautiluscoin_sq.ts \
  locale/nautiluscoin_sr.ts \
  locale/nautiluscoin_sv.ts \
  locale/nautiluscoin_th_TH.ts \
  locale/nautiluscoin_tr.ts \
  locale/nautiluscoin_uk.ts \
  locale/nautiluscoin_ur_PK.ts \
  locale/nautiluscoin_uz@Cyrl.ts \
  locale/nautiluscoin_vi.ts \
  locale/nautiluscoin_vi_VN.ts \
  locale/nautiluscoin_zh_CN.ts \
  locale/nautiluscoin_zh_HK.ts \
  locale/nautiluscoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_nautiluscoinaddressvalidator.cpp \
  moc_nautiluscoinamountfield.cpp \
  moc_nautiluscoingui.cpp \
  moc_nautiluscoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

DIGIBYTE_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  nautiluscoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_nautiluscoin.cpp
QT_QRC = nautiluscoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

DIGIBYTE_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  nautiluscoinaddressvalidator.h \
  nautiluscoinamountfield.h \
  nautiluscoingui.h \
  nautiluscoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/nautiluscoin.ico \
  res/icons/nautiluscoin.png \
  res/icons/nautiluscoin_testnet.ico \
  res/icons/nautiluscoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

DIGIBYTE_QT_CPP = \
  nautiluscoin.cpp \
  nautiluscoinaddressvalidator.cpp \
  nautiluscoinamountfield.cpp \
  nautiluscoingui.cpp \
  nautiluscoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
DIGIBYTE_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

DIGIBYTE_RC = res/nautiluscoin-qt-res.rc

libnautiluscoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libnautiluscoinqt_a_SOURCES = $(DIGIBYTE_QT_CPP) $(DIGIBYTE_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libnautiluscoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libnautiluscoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# nautiluscoin-qt binary #
nautiluscoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
nautiluscoin_qt_SOURCES = nautiluscoin.cpp
if TARGET_DARWIN
  nautiluscoin_qt_SOURCES += $(DIGIBYTE_MM)
endif
if TARGET_WINDOWS
  nautiluscoin_qt_SOURCES += $(DIGIBYTE_RC)
endif
nautiluscoin_qt_LDADD = libnautiluscoinqt.a $(LIBDIGIBYTE_SERVER)
if ENABLE_WALLET
nautiluscoin_qt_LDADD += $(LIBDIGIBYTE_WALLET)
endif
nautiluscoin_qt_LDADD += $(LIBDIGIBYTE_CLI) $(LIBDIGIBYTE_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
nautiluscoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

nautiluscoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/nautiluscoinstrings.cpp

translate: nautiluscoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(DIGIBYTE_QT_CPP) $(DIGIBYTE_QT_H) $(DIGIBYTE_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/nautiluscoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name nautiluscoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
