from setuptools import find_packages
from setuptools import setup

setup(
    name='customized_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('customized_interfaces', 'customized_interfaces.*')),
)
