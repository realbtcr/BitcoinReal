from distutils.core import setup
setup(name='BTCrspendfrom',
      version='1.0',
      description='Command-line utility for btcr "coin control"',
      author='Gavin Andresen',
      author_email='gavin@btcrfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
